/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>
@property (nonatomic,readonly) NSSet * missingURLs; 
@property (nonatomic,readonly) NSSet * deletedURLs; 
@property (nonatomic,readonly) NSSet * parsedContents; 
@property (assign,nonatomic) char shouldIgnoreResponseErrors; 
@required
-(void)setShouldIgnoreResponseErrors:(char)arg1;
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(char)shouldIgnoreResponseErrors;

@end

