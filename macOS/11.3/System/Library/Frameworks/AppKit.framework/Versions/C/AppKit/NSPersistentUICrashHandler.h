/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface NSPersistentUICrashHandler : NSObject {

	NSURL* restorationCountFileURL;
	int crashBlameCounter;

}
-(void)dealloc;
-(void)clearCrashCountFileIfNecessary;
-(id)initWithRestorationCountFileURL:(id)arg1 ;
-(unsigned)modifyCrashBlameCounterBy:(int)arg1 ;
-(long long)crashBlameCounter;
-(void)inspectCrashDataWithModification:(char)arg1 handler:(/*^block*/id)arg2 ;
@end

