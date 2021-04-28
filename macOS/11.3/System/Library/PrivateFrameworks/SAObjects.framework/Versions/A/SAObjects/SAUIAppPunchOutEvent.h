/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appPunchOutEvent;
+(id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
@end
