#include "packet_struct.hpp"

namespace libed2k{

const char* packetToString(proto_type protocol)
{
    static const char* pchUnknown = "Unknown packet";
    static const char* chData[] =
    {
            "00 DON'T USED",
            "OP_LOGINREQUEST",
            "02 DON'T USED",
            "03 DON'T USED",
            "04 DON'T USED",
            "OP_REJECT",
            "06 DON'T USED",
            "07 DON'T USED",
            "08 DON'T USED",
            "09 DON'T USED",
            "0A DON'T USED",
            "0B DON'T USED",
            "0C DON'T USED",
            "0D DON'T USED",
            "0E DON'T USED",
            "0F DON'T USED",
            "10 DON'T USED",
            "11 DON'T USED",
            "12 DON'T USED",
            "13 DON'T USED",
            "OP_GETSERVERLIST", //14
            "OP_OFFERFILES",
            "OP_SEARCHREQUEST",
            "17 DON'T USED",
            "OP_DISCONNECT",
            "OP_GETSOURCES",
            "OP_SEARCH_USER",
            "1B DON'T USED",
            "OP_CALLBACKREQUEST",
            "OP_QUERY_CHATS",
            "OP_CHAT_MESSAGE",
            "OP_JOIN_ROOM",
            "20 DON'T USED",
            "OP_QUERY_MORE_RESULT",
            "22 DON'T USED",
            "OP_GETSOURCES_OBFU",
            "24 DON'T USED",
            "25 DON'T USED",
            "26 DON'T USED",
            "27 DON'T USED",
            "28 DON'T USED",
            "29 DON'T USED",
            "2A DON'T USED",
            "2B DON'T USED",
            "2C DON'T USED",
            "2D DON'T USED",
            "2E DON'T USED",
            "2F DON'T USED",
            "30 DON'T USED",
            "31 DON'T USED",
            "OP_SERVERLIST",
            "OP_SEARCHRESULT",
            "OP_SERVERSTATUS",
            "OP_CALLBACKREQUESTED",
            "OP_CALLBACK_FAIL",
            "37 DON'T USED",
            "OP_SERVERMESSAGE",
            "OP_CHAT_ROOM_REQUEST",
            "OP_CHAT_BROADCAST",
            "OP_CHAT_USER_JOIN",
            "OP_CHAT_USER_LEAVE",
            "OP_CHAT_USER",
            "3E DON'T USED",
            "3F DON'T USED",
            "OP_IDCHANGE",
            "OP_SERVERIDENT",
            "OP_FOUNDSOURCES",
            "OP_USERS_LIST",
            "OP_FOUNDSOURCES_OBFU",
            "45 DON'T USED",
            "OP_SENDINGPART",
            "OP_REQUESTPARTS",
            "OP_FILEREQANSNOFIL",
            "OP_END_OF_DOWNLOAD",
            "OP_ASKSHAREDFILES",
            "OP_ASKSHAREDFILESANSWER",
            "OP_HELLOANSWER",
            "OP_CHANGE_CLIENT_ID",//         = 0x4D, // <ID_old 4><ID_new 4> // Unused for sending
            "OP_MESSAGE",
            "OP_SETREQFILEID",
            "OP_FILESTATUS",
            "OP_HASHSETREQUEST",
            "OP_HASHSETANSWER",
            "53 DON'T USED",
            "OP_STARTUPLOADREQ",
            "OP_ACCEPTUPLOADREQ",
            "OP_CANCELTRANSFER",
            "OP_OUTOFPARTREQS",
            "OP_REQUESTFILENAME",
            "OP_REQFILENAMEANSWER",
            "5A DON'T USED",
            "OP_CHANGE_SLOT",
            "OP_QUEUERANK",
            "OP_ASKSHAREDDIRS", //            = 0x5D, // (null)
            "OP_ASKSHAREDFILESDIR",
            "OP_ASKSHAREDDIRSANS",
            "OP_ASKSHAREDFILESDIRANS",
            "OP_ASKSHAREDDENIEDANS"//       = 0x61  // (null)
    };

    if (protocol < sizeof(chData)/sizeof(chData[0]))
    {
        return (chData[static_cast<unsigned int>(protocol)]);
    }

    return (pchUnknown);
}

shared_file_entry::shared_file_entry()
{
}

shared_file_entry::shared_file_entry(const md4_hash& hFile, boost::uint32_t nFileId, boost::uint16_t nPort) :
        m_hFile(hFile),
        m_nFileId(nFileId),
        m_nPort(nPort)
{

}

}
