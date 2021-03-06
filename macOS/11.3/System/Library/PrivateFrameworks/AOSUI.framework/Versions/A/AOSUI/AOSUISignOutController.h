/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AOSUISignOutController : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _signOutObservers;

}

@property (retain) ACAccountStore * accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (retain) NSMutableArray * signOutObservers;              //@synthesize signOutObservers=_signOutObservers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)signOutAccount:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)signOutObservers;
-(void)endProgress;
-(void)startProgress;
-(id)_dataclassActionsForAccountDeletion:(id)arg1 ;
-(void)_finishDeletingAccount:(id)arg1 window:(id)arg2 withActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removeAccount:(id)arg1 withActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_preflightServices:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showDesktopAndDocumentsAlertForAccount:(id)arg1 window:(id)arg2 withActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_showWalletDialogForAccount:(id)arg1 window:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSignOutObservers:(NSMutableArray *)arg1 ;
@end

