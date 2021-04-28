/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FPDIterator : NSObject {

	char _skipMaterializedTreeTraversal;
	char _shouldDecorateItems;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long numFoldersPopped; 
@property (nonatomic,readonly) char done; 
@property (assign,nonatomic) char skipMaterializedTreeTraversal;                 //@synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal - In the implementation block
@property (assign,nonatomic) char shouldDecorateItems;                           //@synthesize shouldDecorateItems=_shouldDecorateItems - In the implementation block
+(id)iteratorForLocator:(id)arg1 manager:(id)arg2 ;
+(id)iteratorForLocator:(id)arg1 provider:(id)arg2 ;
+(id)iteratorForLocator:(id)arg1 wantsDisk:(char)arg2 provider:(id)arg3 ;
-(NSError *)error;
-(char)done;
-(id)nextItem;
-(char)shouldDecorateItems;
-(char)skipMaterializedTreeTraversal;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(void)setShouldDecorateItems:(char)arg1 ;
-(void)setSkipMaterializedTreeTraversal:(char)arg1 ;
@end
