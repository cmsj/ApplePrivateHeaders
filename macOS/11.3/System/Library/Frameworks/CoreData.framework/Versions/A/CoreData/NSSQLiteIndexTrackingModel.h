/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface NSSQLiteIndexTrackingModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ancillaryModelNamespace;
+(id)newModelForFrameworkVersion:(id)arg1 ;
+(void)updateIndexStatistics:(id)arg1 usingConnection:(id)arg2 model:(id)arg3 ;
+(unsigned long long)ancillaryEntityOffset;
+(void)_invalidateStaticCaches;
+(unsigned long long)ancillaryEntityCount;
+(void)initialize;
@end

