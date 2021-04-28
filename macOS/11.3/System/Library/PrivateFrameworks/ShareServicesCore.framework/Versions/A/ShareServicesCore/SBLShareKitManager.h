/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShareServicesCore.framework/Versions/A/ShareServicesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareServicesCore/ShareServicesCore-Structs.h>
#import <libobjc.A.dylib/NSMenuDelegate.h>
#import <libobjc.A.dylib/NSSharingServiceDelegate.h>
#import <libobjc.A.dylib/NSSharingServicePickerDelegate.h>

@protocol OS_dispatch_queue, SBLShareKitManagerProgressDelegate, SBLShareKitManagerReconnectDelegate, SBLShareKitManagerDelegate;
@class NSArray, NSObject, NSDictionary, NSString, NSSharingServicePicker, NSWindow;

@interface SBLShareKitManager : NSObject <NSMenuDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate> {

	NSArray* _assetsToShare;
	/*^block*/id _sharedAlbumAction;
	NSObject*<OS_dispatch_queue> _serialQueue;
	char _isFullscreen;
	char _needsSharingAlert;
	id<SBLShareKitManagerProgressDelegate> _progressDelegate;
	id<SBLShareKitManagerReconnectDelegate> _reconnectDelegate;
	id<SBLShareKitManagerDelegate> _delegate;
	NSDictionary* _assetsInfo;
	NSString* _lastServiceSelected;
	NSString* _sharingAlertTitle;
	NSString* _sharingAlertMessage;
	NSString* _sharingAlertConfirmTitle;
	NSString* _sharingAlertCancelTitle;
	NSSharingServicePicker* _sessionPicker;
	NSWindow* _hostWindow;

}

@property (nonatomic,retain) NSDictionary * assetsInfo;                                    //@synthesize assetsInfo=_assetsInfo - In the implementation block
@property (assign,nonatomic) char isFullscreen;                                            //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (nonatomic,retain) NSString * lastServiceSelected;                               //@synthesize lastServiceSelected=_lastServiceSelected - In the implementation block
@property (assign,nonatomic) char needsSharingAlert;                                       //@synthesize needsSharingAlert=_needsSharingAlert - In the implementation block
@property (nonatomic,copy) NSString * sharingAlertTitle;                                   //@synthesize sharingAlertTitle=_sharingAlertTitle - In the implementation block
@property (nonatomic,copy) NSString * sharingAlertMessage;                                 //@synthesize sharingAlertMessage=_sharingAlertMessage - In the implementation block
@property (nonatomic,copy) NSString * sharingAlertConfirmTitle;                            //@synthesize sharingAlertConfirmTitle=_sharingAlertConfirmTitle - In the implementation block
@property (nonatomic,copy) NSString * sharingAlertCancelTitle;                             //@synthesize sharingAlertCancelTitle=_sharingAlertCancelTitle - In the implementation block
@property (nonatomic,retain) NSSharingServicePicker * sessionPicker;                       //@synthesize sessionPicker=_sessionPicker - In the implementation block
@property (nonatomic,retain) NSWindow * hostWindow;                                        //@synthesize hostWindow=_hostWindow - In the implementation block
@property (__weak) id<SBLShareKitManagerProgressDelegate> progressDelegate;                //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (__weak) id<SBLShareKitManagerReconnectDelegate> reconnectDelegate;              //@synthesize reconnectDelegate=_reconnectDelegate - In the implementation block
@property (__weak) id<SBLShareKitManagerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBLShareKitManagerDelegate>)delegate;
-(void)setDelegate:(id<SBLShareKitManagerDelegate>)arg1 ;
-(void)reset;
-(void)menuDidClose:(id)arg1 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
-(void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(void)sharingService:(id)arg1 willShareItems:(id)arg2 ;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(void)abort;
-(void)setHostWindow:(NSWindow *)arg1 ;
-(NSWindow *)hostWindow;
-(char)isFullscreen;
-(id<SBLShareKitManagerProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<SBLShareKitManagerProgressDelegate>)arg1 ;
-(void)setIsFullscreen:(char)arg1 ;
-(id<SBLShareKitManagerReconnectDelegate>)reconnectDelegate;
-(void)setReconnectDelegate:(id<SBLShareKitManagerReconnectDelegate>)arg1 ;
-(id)sharingItemsForAssets:(id)arg1 allowLocation:(char)arg2 ;
-(id)assetForItemProvider:(id)arg1 ;
-(void)cleanupItems:(id)arg1 ;
-(void)preflightItemProviders:(id)arg1 ;
-(char)populateMenu:(id)arg1 forAssets:(id)arg2 sharingParams:(id)arg3 allowedLatency:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)_populateMenu:(id)arg1 forSharingParams:(id)arg2 shareableItems:(id)arg3 ;
-(char)populateMenu:(id)arg1 forAssets:(id)arg2 sharingParams:(id)arg3 ;
-(id)servicePickerForItems:(id)arg1 ;
-(id)filterServices:(id)arg1 ;
-(NSDictionary *)assetsInfo;
-(void)setAssetsInfo:(NSDictionary *)arg1 ;
-(NSString *)lastServiceSelected;
-(void)setLastServiceSelected:(NSString *)arg1 ;
-(char)needsSharingAlert;
-(void)setNeedsSharingAlert:(char)arg1 ;
-(NSString *)sharingAlertTitle;
-(void)setSharingAlertTitle:(NSString *)arg1 ;
-(NSString *)sharingAlertMessage;
-(void)setSharingAlertMessage:(NSString *)arg1 ;
-(NSString *)sharingAlertConfirmTitle;
-(void)setSharingAlertConfirmTitle:(NSString *)arg1 ;
-(NSString *)sharingAlertCancelTitle;
-(void)setSharingAlertCancelTitle:(NSString *)arg1 ;
-(NSSharingServicePicker *)sessionPicker;
-(void)setSessionPicker:(NSSharingServicePicker *)arg1 ;
@end
