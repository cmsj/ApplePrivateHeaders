/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreUI.framework/Versions/A/StoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSharingServiceDelegate <NSObject>
@optional
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3;
-(CGRect*)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3;
-(id)anchoringViewForSharingService:(id)arg1 showRelativeToRect:(CGRect*)arg2 preferredEdge:(unsigned long long*)arg3;
-(void)sharingService:(id)arg1 willShareItems:(id)arg2;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2;

@end

