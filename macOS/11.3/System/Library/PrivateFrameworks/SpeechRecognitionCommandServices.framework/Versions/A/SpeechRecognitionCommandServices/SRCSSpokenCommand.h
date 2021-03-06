/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/Versions/A/SpeechRecognitionCommandServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary, NSMutableDictionary, SRCSCommandRecognizer;

@interface SRCSSpokenCommand : NSObject <NSCopying> {

	NSArray* _strings;
	NSString* _identifier;
	NSDictionary* _recognizedParameters;
	NSMutableDictionary* _languageModelTree;
	id _fstGrammar;
	SRCSCommandRecognizer* _commandRecognizer;

}

@property (readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDictionary * recognizedParameters;              //@synthesize recognizedParameters=_recognizedParameters - In the implementation block
@property (readonly) NSArray * strings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)strings;
-(id)_uniqueCustomCommandIdentifier;
-(id)commandRecognizer;
-(id)_initWithSpokenCommand:(id)arg1 ;
-(void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)arg1 ;
-(id)languageModelTree;
-(id)initWithStrings:(id)arg1 ;
-(void)setCommandRecognizer:(id)arg1 ;
-(id)fstGrammar;
-(NSDictionary *)recognizedParameters;
-(void)setRecognizedParameters:(NSDictionary *)arg1 ;
@end

