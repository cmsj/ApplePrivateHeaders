/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSArray;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	NSString* _profile;
	NSString* _profileVersion;
	NSArray* _requestedKeys;

}

@property (retain) NSString * profile;                              //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * profileVersion;                       //@synthesize profileVersion=_profileVersion - In the implementation block
@property (retain) NSArray * requestedKeys;                         //@synthesize requestedKeys=_requestedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSArray *)requestedKeys;
-(void)_fetchValuesForKeys:(id)arg1 bag:(id)arg2 startingAtIndex:(long long)arg3 valuesArray:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setRequestedKeys:(NSArray *)arg1 ;
@end

