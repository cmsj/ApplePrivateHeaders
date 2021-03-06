/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDDeviceIdentifierProtocol
@required
-(void)clearAllIdentifiersOfType:(long long)arg1;
-(void)getIdentifierOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getIdentifierOfType:(long long)arg1 forApplicationAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

