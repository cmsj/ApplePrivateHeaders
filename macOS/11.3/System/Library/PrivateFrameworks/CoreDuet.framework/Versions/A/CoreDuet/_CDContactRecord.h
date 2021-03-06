/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class _CDContact, NSString, NSSet;

@interface _CDContactRecord : NSManagedObject {

	_CDContact* contact;

}

@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSString * displayName; 
@property (assign,nonatomic) int displayType; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * customIdentifier; 
@property (nonatomic,retain) NSString * personId; 
@property (assign,nonatomic) int personIdType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSSet * interactionRecipient; 
@property (nonatomic,retain) NSSet * interactionSender; 
@property (assign,nonatomic) int incomingRecipientCount; 
@property (assign,nonatomic) int outgoingRecipientCount; 
@property (assign,nonatomic) int incomingSenderCount; 
@property (assign,nonatomic) double firstIncomingRecipientDate; 
@property (assign,nonatomic) double firstOutgoingRecipientDate; 
@property (assign,nonatomic) double firstIncomingSenderDate; 
@property (assign,nonatomic) double lastIncomingRecipientDate; 
@property (assign,nonatomic) double lastOutgoingRecipientDate; 
@property (assign,nonatomic) double lastIncomingSenderDate; 
@property (retain) _CDContact * contact; 
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
@end

