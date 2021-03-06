/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>
#import <CoreDAV/CoreDAVContainerMultiGetSubmittable.h>

@class NSSet, NSString, NSError;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {

	NSSet* _urls;
	NSString* _appSpecificNamespace;
	NSString* _appSpecificMultiGetNameSpace;
	NSString* _appSpecificMultiGetCommand;
	NSString* _appSpecificDataProp;
	Class _appSpecificDataItemClass;
	char _shouldIgnoreResponseErrors;
	NSSet* _additionalPropElements;
	NSSet* _parsedContents;
	NSSet* _missingURLs;
	NSSet* _deletedURLs;

}

@property (nonatomic,retain) NSSet * additionalPropElements;                                  //@synthesize additionalPropElements=_additionalPropElements - In the implementation block
@property (nonatomic,readonly) NSSet * missingURLs;                                           //@synthesize missingURLs=_missingURLs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedURLs;                                           //@synthesize deletedURLs=_deletedURLs - In the implementation block
@property (nonatomic,readonly) NSSet * parsedContents;                                        //@synthesize parsedContents=_parsedContents - In the implementation block
@property (assign,nonatomic) char shouldIgnoreResponseErrors;                                 //@synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors - In the implementation block
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3 ;
-(void)setShouldIgnoreResponseErrors:(char)arg1 ;
-(id)copyAdditionalPropElements;
-(void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2 ;
-(void)setAdditionalPropElements:(NSSet *)arg1 ;
-(NSSet *)additionalPropElements;
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(char)shouldIgnoreResponseErrors;
@end

