/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/Versions/A/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OBBundleManager : NSObject
+(id)sharedManager;
-(id)bundleWithIdentifier:(id)arg1 ;
-(id)allBundles;
-(id)orderedPrivacyBundlesWithPrivacyPaneBundle:(char)arg1 ;
-(id)bundlesWithIdentifiers:(id)arg1 ;
-(id)_bundleSearchPath;
-(id)_allPrivacyBundles;
-(id)orderedPrivacyBundles;
@end

