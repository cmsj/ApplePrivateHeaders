/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKitFoundation.framework/Versions/A/BookKitFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableDictionary, NSData, NSString, NSMutableString;

@interface BKSinfRightsParser : NSObject <NSXMLParserDelegate> {

	NSMutableDictionary* _rightsInfo;
	NSData* _sinfData;
	NSString* _rightsId;
	NSMutableString* _foundText;

}

@property (nonatomic,retain) NSMutableDictionary * rightsInfo;              //@synthesize rightsInfo=_rightsInfo - In the implementation block
@property (nonatomic,retain) NSData * sinfData;                             //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSString * rightsId;                             //@synthesize rightsId=_rightsId - In the implementation block
@property (nonatomic,retain) NSMutableString * foundText;                   //@synthesize foundText=_foundText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(NSData *)sinfData;
-(void)setSinfData:(NSData *)arg1 ;
-(NSMutableDictionary *)rightsInfo;
-(void)setRightsId:(NSString *)arg1 ;
-(NSMutableString *)foundText;
-(NSString *)rightsId;
-(void)setRightsInfo:(NSMutableDictionary *)arg1 ;
-(void)setFoundText:(NSMutableString *)arg1 ;
@end

