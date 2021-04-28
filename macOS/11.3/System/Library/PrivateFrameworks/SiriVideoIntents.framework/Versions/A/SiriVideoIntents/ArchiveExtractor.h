/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/Versions/A/SiriVideoIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriVideoIntents/SiriVideoIntents-Structs.h>
@interface ArchiveExtractor : NSObject
-(archiveRef)createWriteDiskArchive;
-(char)copyDataFromReadArchive:(archiveRef)arg1 toWriteDiskArchive:(archiveRef)arg2 ;
-(archiveRef)createReadArchive;
-(char)performExtractionForArchive:(archiveRef)arg1 toDestinationDirectory:(id)arg2 ;
-(char)unarchiveData:(id)arg1 toDestinationDirectory:(id)arg2 ;
-(char)extractArchiveAtURL:(id)arg1 toDestinationDirectoryURL:(id)arg2 ;
@end
