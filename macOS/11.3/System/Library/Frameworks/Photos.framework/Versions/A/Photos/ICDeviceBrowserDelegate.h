/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDeviceBrowserDelegate <NSObject>
@optional
-(void)deviceBrowser:(id)arg1 deviceDidChangeName:(id)arg2;
-(void)deviceBrowser:(id)arg1 deviceDidChangeSharingState:(id)arg2;
-(void)deviceBrowser:(id)arg1 requestsSelectDevice:(id)arg2;
-(void)deviceBrowserDidEnumerateLocalDevices:(id)arg1;
-(void)deviceBrowserWillSuspendOperations:(id)arg1;
-(void)deviceBrowserDidSuspendOperations:(id)arg1;
-(void)deviceBrowserDidCancelSuspendOperations:(id)arg1;
-(void)deviceBrowserDidResumeOperations:(id)arg1;

@required
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(char)arg3;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(char)arg3;

@end

