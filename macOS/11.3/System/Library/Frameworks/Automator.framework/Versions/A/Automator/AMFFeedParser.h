/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, AMFFeedParserDelegate;
@class NSObject, NSData, NSURL, AMFFeedElement, NSMutableArray, NSString;

@interface AMFFeedParser : NSObject <NSXMLParserDelegate, NSCopying> {

	NSObject*<OS_dispatch_queue> _parsingQueue;
	NSData* _data;
	NSURL* _url;
	AMFFeedElement* _root;
	NSMutableArray* _elementStack;
	id<AMFFeedParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMFFeedParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)parseFeedAsynchronouslyWithData:(id)arg1 url:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AMFFeedParserDelegate>)delegate;
-(void)setDelegate:(id<AMFFeedParserDelegate>)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(id)initWithData:(id)arg1 url:(id)arg2 ;
-(void)startParsing;
-(void)_beginParsingData:(id)arg1 ;
-(void)_parsingFailedWithError:(id)arg1 ;
-(void)_parsingFinishedWithMetada:(id)arg1 entries:(id)arg2 ;
-(void)_parseAsRSSFeed;
-(void)_parseAsAtomFeed;
@end

