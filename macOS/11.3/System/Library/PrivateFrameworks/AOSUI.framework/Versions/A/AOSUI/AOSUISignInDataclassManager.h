/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AOSUISignInDataclassManager : NSObject
+(id)sharedManager;
-(void)enableDataclassesAfterSignInForAccount:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableFindMyAfterSignInForAccount:(id)arg1 window:(id)arg2 shouldAvoidUI:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)_listStringFromAppNames:(id)arg1 ;
-(void)_enableDataClass:(id)arg1 forAccount:(id)arg2 window:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

