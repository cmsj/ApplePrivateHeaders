/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSAppleAccountInformationProviding.h>

@class NSString;

@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)appleAccountSecurityState;
-(unsigned long long)_primaryAppleAccountSecurityLevel;
-(void)getAppleAccountSecurityStateWithCompletion:(/*^block*/id)arg1 ;
@end

