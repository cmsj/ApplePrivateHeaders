/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * cancellationCommands; 
@property (nonatomic,copy) NSArray * failureCommands; 
@property (nonatomic,copy) NSArray * successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)cancellationCommands;
-(void)setCancellationCommands:(NSArray *)arg1 ;
-(NSArray *)failureCommands;
-(void)setFailureCommands:(NSArray *)arg1 ;
-(NSArray *)successCommands;
-(void)setSuccessCommands:(NSArray *)arg1 ;
@end

