/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVStreamDataParserOutputHandling <NSObject>
@optional
-(void)streamDataParser:(id)arg1 didFailToParseStreamDataWithError:(id)arg2;
-(void)streamDataParser:(id)arg1 didParseStreamDataAsAsset:(id)arg2 withDiscontinuity:(char)arg3;
-(void)streamDataParser:(id)arg1 didProvideMediaData:(opaqueCMSampleBufferRef)arg2 forTrackID:(int)arg3 mediaType:(id)arg4 flags:(unsigned long long)arg5;
-(void)streamDataParser:(id)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(id)arg3;
-(void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)arg1 forTrackID:(int)arg2;
-(void)streamDataParser:(id)arg1 didProvideContentKeyRequestInitializationData:(id)arg2 forTrackID:(int)arg3;

@end

