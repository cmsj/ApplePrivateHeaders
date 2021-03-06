/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerService : NSObject
+(void)appendWatchOSLinksToString:(id)arg1 ;
+(id)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 ;
+(long long)scanQuery:(DDScanQueryRef)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)scanString:(id)arg1 ;
+(long long)scanString:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)cancelJob:(long long)arg1 ;
+(id)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 ;
+(long long)scanString:(id)arg1 range:(NSRange)arg2 configuration:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

