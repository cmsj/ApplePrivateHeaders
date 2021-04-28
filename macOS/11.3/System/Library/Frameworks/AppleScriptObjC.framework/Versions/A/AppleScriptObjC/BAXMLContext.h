/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptObjC.framework/Versions/A/AppleScriptObjC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class BAMetadataManager, NSString, BAFunctionSignature, NSMutableDictionary;

@interface BAXMLContext : NSObject <NSXMLParserDelegate> {

	BAMetadataManager* _m;
	NSString* _currentClass;
	NSString* _currentMethod;
	NSString* _currentProtocol;
	NSString* _currentFunction;
	unsigned long long _currentArgDepth;
	BAFunctionSignature* _currentSignature;
	NSMutableDictionary* _retvals;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)initWithManager:(id)arg1 ;
@end
