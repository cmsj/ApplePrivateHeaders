/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {

	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,copy,readonly) PFHistoryAnalyzerOptions * options;              //@synthesize options=_options - In the implementation block
-(char)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1 ;
-(id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)init;
-(PFHistoryAnalyzerOptions *)options;
-(id)initWithOptions:(id)arg1 ;
@end

