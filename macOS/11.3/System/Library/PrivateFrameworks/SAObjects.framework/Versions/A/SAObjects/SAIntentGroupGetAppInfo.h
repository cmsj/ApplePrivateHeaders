/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdentifyingInfo; 
@property (assign,nonatomic) char shouldSearchLocallyOnly; 
+(id)getAppInfo;
+(id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)mutatingCommand;
-(NSArray *)appIdentifyingInfo;
-(void)setAppIdentifyingInfo:(NSArray *)arg1 ;
-(char)shouldSearchLocallyOnly;
-(void)setShouldSearchLocallyOnly:(char)arg1 ;
@end
