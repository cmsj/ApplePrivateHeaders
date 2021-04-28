/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorTypingIndicator_Icon, NSArray;

@interface BlastDoorTypingIndicator : NSObject {

	 typingIndicator;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) char isFinished; 
@property (readonly,nonatomic) BlastDoorTypingIndicator_Icon * icon; 
@property (readonly,nonatomic) NSString * balloonPluginBundleID; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
-(NSString *)description;
-(id)init;
-(char)isFinished;
-(BlastDoorTypingIndicator_Icon *)icon;
-(NSArray *)participantDestinationIdentifiers;
-(NSString *)balloonPluginBundleID;
@end
