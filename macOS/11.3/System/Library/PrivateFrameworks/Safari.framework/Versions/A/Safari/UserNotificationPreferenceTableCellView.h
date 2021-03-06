/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class UserNotificationPolicyData, NSPopUpButton, NSMenuItem;

@interface UserNotificationPreferenceTableCellView : NSTableCellView {

	UserNotificationPolicyData* _data;
	NSPopUpButton* _policyPopUpButton;
	NSMenuItem* _allowMenuItem;
	NSMenuItem* _denyMenuItem;

}

@property (assign,nonatomic,__weak) NSPopUpButton * policyPopUpButton;              //@synthesize policyPopUpButton=_policyPopUpButton - In the implementation block
@property (assign,nonatomic,__weak) NSMenuItem * allowMenuItem;                     //@synthesize allowMenuItem=_allowMenuItem - In the implementation block
@property (assign,nonatomic,__weak) NSMenuItem * denyMenuItem;                      //@synthesize denyMenuItem=_denyMenuItem - In the implementation block
@property (nonatomic,retain) UserNotificationPolicyData * data;                     //@synthesize data=_data - In the implementation block
-(UserNotificationPolicyData *)data;
-(void)setData:(UserNotificationPolicyData *)arg1 ;
-(NSPopUpButton *)policyPopUpButton;
-(void)setPolicyPopUpButton:(NSPopUpButton *)arg1 ;
-(int)_permissionPolicyForMenuItem:(id)arg1 ;
-(id)_menuItemForPermissionPolicy:(int)arg1 ;
-(void)setUserNotificationPolicyFrom:(id)arg1 ;
-(NSMenuItem *)allowMenuItem;
-(void)setAllowMenuItem:(NSMenuItem *)arg1 ;
-(NSMenuItem *)denyMenuItem;
-(void)setDenyMenuItem:(NSMenuItem *)arg1 ;
@end

