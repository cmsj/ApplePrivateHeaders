/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKArchive, NSDictionary;

@interface PKSignedContainer : NSObject {

	PKArchive* _archive;
	NSDictionary* _metadata;
	char _performsAssessment;
	unsigned long long _options;

}

@property (assign) char performsAssessmentIfNeeded;                               //@synthesize performsAssessment=_performsAssessment - In the implementation block
@property (assign) unsigned long long options;                                    //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long fileSystemCompressionFormat; 
-(char)_assessURL:(id)arg1 withQuarantineFlags:(unsigned)arg2 ;
-(char)_setAssessment:(char)arg1 ofItemAtPath:(id)arg2 ;
-(void)setPerformsAssessmentIfNeeded:(char)arg1 ;
-(char)performsAssessmentIfNeeded;
-(char)_assessContainerReturningShouldFlagContents:(char*)arg1 ;
-(unsigned long long)fileSystemCompressionFormat;
-(void)_startUnarchivingAtPath:(id)arg1 cancelHandler:(id)arg2 notifyOnQueue:(id)arg3 progress:(/*^block*/id)arg4 finish:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)cancelOperation:(id)arg1 ;
-(id)_archive;
-(id)_initCommon;
-(id)initForReadingFromContainerAtURL:(id)arg1 error:(id*)arg2 ;
-(id)startUnarchivingAtPath:(id)arg1 notifyOnQueue:(id)arg2 progress:(/*^block*/id)arg3 finish:(/*^block*/id)arg4 ;
@end

