/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSNotificationCenter, NSString;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging> {

	char _cloudPhotosEnabled;
	/*^block*/id _accountFactory;
	NSNotificationCenter* _notificationCenter;

}

@property (getter=isCloudPhotosEnabled) char cloudPhotosEnabled;              //@synthesize cloudPhotosEnabled=_cloudPhotosEnabled - In the implementation block
@property (readonly) id accountFactory;                                       //@synthesize accountFactory=_accountFactory - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(id)accountFactory;
-(char)isCloudPhotosEnabled;
-(id)initWithAccountFactory:(/*^block*/id)arg1 notificationCenter:(id)arg2 ;
-(void)handleAccountStoreDidChangeNotification:(id)arg1 ;
-(char)fetchCloudPhotosEnabled;
-(void)setCloudPhotosEnabled:(char)arg1 ;
@end

