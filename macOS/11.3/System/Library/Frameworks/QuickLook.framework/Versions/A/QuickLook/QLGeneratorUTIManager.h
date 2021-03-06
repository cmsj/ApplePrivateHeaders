/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLook.framework/Versions/A/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLGeneratorUTIManager : NSObject
+(char)_shouldUseLegacyGeneratorForType:(id)arg1 extensionType:(unsigned long long)arg2 ;
+(void)_setupTestGenerator:(_QLGenerator*)arg1 withDisplayBundleID:(id)arg2 ;
+(char)isUsingTestDatabase;
+(char)shouldUseLegacyGeneratorForThumbnailType:(id)arg1 ;
+(char)shouldUseLegacyGeneratorForPreviewType:(id)arg1 ;
+(void)_setTestDatabaseWithMockGenerators:(id)arg1 ;
+(void)_clearTestGenerators;
@end

