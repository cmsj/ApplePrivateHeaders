/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@class PPLocalNamedEntityStore, NSString;

@interface PPConnectionsNamedEntitySource : PPConnectionsSource <PPConnectionsLocationSource> {

	PPLocalNamedEntityStore* _namedEntityStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)identifier;
-(id)initWithNamedEntityStore:(id)arg1 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
@end
