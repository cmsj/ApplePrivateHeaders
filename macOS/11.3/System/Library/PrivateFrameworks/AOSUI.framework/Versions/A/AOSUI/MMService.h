/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AOSUI/AOSUI-Structs.h>
@class NSWindow, NSString, NSMutableArray, NSImage, NSByteCountFormatter;

@interface MMService : NSObject {

	CFStringRef _accountID;
	CFStringRef _serviceID;
	NSWindow* _parentWindow;
	char _itemEnabled;
	NSString* _infoButtonLabel;
	char _alwaysShowOptions;
	char _optionsButtonEnabled;
	NSString* _progressString;
	NSString* _statusString;
	long long _statusCode;
	char _determiningStatus;
	char _isPrimary;
	NSString* _accountClass;
	NSMutableArray* _aeArray;
	NSImage* _icon;
	NSByteCountFormatter* _byteCountFormatter;

}

@property (retain) NSWindow * parentWindow; 
@property (assign) char itemEnabled; 
@property (setter=setInfoButtonLabel:,retain) NSString * infoButtonLabel; 
@property (assign) char alwaysShowOptions; 
@property (retain) NSString * progressString; 
@property (retain) NSString * statusString; 
@property (assign) long long statusCode; 
@property (assign) char determiningStatus; 
@property (retain) NSMutableArray * aeArray;                                           //@synthesize aeArray=_aeArray - In the implementation block
@property (retain) NSByteCountFormatter * byteCountFormatter;                          //@synthesize byteCountFormatter=_byteCountFormatter - In the implementation block
@property (copy,readonly) NSString * accountID; 
@property (copy,readonly) NSString * serviceID; 
@property (readonly) NSImage * icon; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * defaultAppName; 
@property (assign) char optionsButtonEnabled; 
@property (readonly) char isPrimary;                                                   //@synthesize isPrimary=_isPrimary - In the implementation block
@property (readonly) NSString * accountClass;                                          //@synthesize accountClass=_accountClass - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEnabled;
-(NSString *)displayName;
-(NSWindow *)parentWindow;
-(long long)statusCode;
-(NSImage *)icon;
-(id)valueForProperty:(id)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
-(void)showMoreInfo:(id)arg1 ;
-(id)properties;
-(NSString *)accountID;
-(NSString *)serviceID;
-(char)isPrimary;
-(void)setStatusCode:(long long)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(char)canEnable;
-(void)_updateStatus;
-(id)appleAccount;
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)setAeArray:(NSMutableArray *)arg1 ;
-(char)_isEnabledForDisplay;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)disableAlertTitle;
-(id)disableAlertMessage;
-(id)buttonTitleForAction:(id)arg1 ;
-(int)optionForAction:(id)arg1 ;
-(void)setEnabled:(char)arg1 withOptions:(int)arg2 completion:(/*^block*/id)arg3 ;
-(char)hasDataToMerge;
-(id)enableAlertTitle;
-(id)enableAlertMessage;
-(void)mtLogFeature:(id)arg1 toggledOn:(char)arg2 ;
-(char)canEnable:(id*)arg1 ;
-(char)isSupportedForCurrentUser;
-(void)_setEnabled:(char)arg1 withOptions:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_postServiceStatusChangedNotification;
-(NSMutableArray *)aeArray;
-(void)handleAEEvents:(id)arg1 ;
-(NSByteCountFormatter *)byteCountFormatter;
-(void)setByteCountFormatter:(NSByteCountFormatter *)arg1 ;
-(id)mmAccount;
-(void)invalidateService;
-(char)_supportsMixedEnableState;
-(long long)_isEnabledForMixedDisplay;
-(char)isInactiveOrEnabled;
-(char)isDataService;
-(char)hasPreflightAction;
-(char)supportsSavingLocally;
-(void)reconcileEnableStatus;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(void)setEnabled:(char)arg1 creating:(char)arg2 isPrimary:(char)arg3 withWindow:(id)arg4 ;
-(char)shouldEnableOnLogin;
-(char)willEnableDataclass;
-(char)willDisableDataclass;
-(void)_setEnabled:(char)arg1 withOptions:(int)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSString *)defaultAppName;
-(char)itemEnabled;
-(void)setItemEnabled:(char)arg1 ;
-(NSString *)infoButtonLabel;
-(void)setInfoButtonLabel:(NSString *)arg1 ;
-(char)alwaysShowOptions;
-(void)setAlwaysShowOptions:(char)arg1 ;
-(char)optionsButtonEnabled;
-(void)setOptionsButtonEnabled:(char)arg1 ;
-(NSString *)progressString;
-(void)setProgressString:(NSString *)arg1 ;
-(char)determiningStatus;
-(void)setDeterminingStatus:(char)arg1 ;
-(void)_serviceFailed:(id)arg1 ;
-(id)fileSizeDescription:(unsigned long long)arg1 ;
-(void)preflightDSEEnableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)DSEEnableWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)accountClass;
@end

