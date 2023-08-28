# Chat Application
# Requirements
1. Send messages to other people
2. Send to phone number or contact
3. Constacts have first & last name, profile photo, phone number
4. Text message only (no audio, video, GIFs, images) 
5. Multiple people in a group messages
6. Groups can have names
7. Removed form a group = cannot see any further messages
8. Added to a group = cannot see older messages

# Design
![Alt text](/images/chat_app.png?raw=true "Optional Title")
![Alt text](/images/chat_app1.png?raw=true "Optional Title")
![Alt text](/images/chat_app2.png?raw=true "Optional Title")

**Now the DB becomes circular dependent** 
![Alt text](/images/chat_app3.png?raw=true "Optional Title")

**Changes**
- As message is related to conversation so no need to relate it to conatct.
- Also _to_nember_ field is removed as messages aren't sent to a single number.
![Alt text](/images/chat_app4.png?raw=true "Optional Title")

# Enhancements
- Message does not store phone number
- _from_number_ could refer to a contact instead
- Enhance _message_text_ for other media types

# Points to be noted
- _group_member_ and _contact_ should be in M-M relationship and there must be a joining table between them. Because one group can have multiple contacts, and one contact can be present in multiple groups.
- If a user want to send a message to only one contact, how would that work since the table _contact_ is only linked directly to the table _group_member_? I mean, user would have to use the _group_member_ table even when the message is not sent to a group, right?
    - Yes, it would use the same concept, even if it is just to one contact. The group would have just the one contact.
