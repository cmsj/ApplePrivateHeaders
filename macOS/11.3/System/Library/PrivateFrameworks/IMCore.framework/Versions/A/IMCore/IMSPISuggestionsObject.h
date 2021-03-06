/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IMSPISuggestionsObject : NSObject {

	NSString* _chatGUID;
	NSString* _displayName;
	NSArray* _participants;

}

@property (readonly) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
-(id)description;
-(NSString *)displayName;
-(NSArray *)participants;
-(NSString *)chatGUID;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3 ;
@end

