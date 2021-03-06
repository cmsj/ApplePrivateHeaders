/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/Versions/A/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@interface PKDefaults : NSObject
+(id)lastUsedPrintersForPhoto:(char)arg1 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 forPhoto:(char)arg4 ;
+(id)lastUsedPrinters;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 ;
+(long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

