# Facebook: A Social Network Database
# Requirements/Features
1. Sign up and create a profile
2. Add other profiles as friends
3. Add posts that contain text, photos or videos
4. See posts that friends have added
5. Like and add comments to posts others have added

# 1. Sign up and create a profile
![Alt text](/images/facebook.png?raw=true "Optional Title")

# 2. Add other profiles as friends
- Friendship = relationship between two profiles
- "Self Join" concept useful for hierarchies
- Not suitable for us
![Alt text](/images/facebook1.png?raw=true "Optional Title")

# 3. Add posts that contain text, photos or videos
![Alt text](/images/facebook2.png?raw=true "Optional Title")

# 4. See posts that friends have added
- News feed
    - Developed in the application
    - No DB changes
- We can query from the DB to show the posts on the feed

# 5. Like and add comments to posts others have added
![Alt text](/images/facebook3.png?raw=true "Optional Title")

# Sample Queries application may use to get the information:
Assume ```id = 14``` is current user's profile  
**1. Find details of your friend**
```
SELECT p.given_name, p.surname, p.country
FROM user_profile p
INNER JOIN friendship f ON f.profile_request = p. id
WHERE f.profile_accept = 14
UNION
SELECT p.given_name, p.surname, p.country
FROM user_profile p
INNER JOIN friendship f ON f.profile_accept = p.id
WHERE f.profile_request = 14;
```

**2. All comments on post**
```
SELECT c.created_datetime, c.comment_text, p.given_name, p.surname
FROM user_profile p
INNER JOIN post_comment c ON p.id = c.profile_id
WHERE c.post_id = 31;
```

**3. All of your text posts**
```
SELECT c.created_datetime, c.comment_text
FROM post_comment c
WHERE c.profile_id = 14;
```