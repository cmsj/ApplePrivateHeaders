/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeballServiceProxyDelegate <NSObject>
@required
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)completedUpdateForHandlerID:(id)arg1;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;

@end

