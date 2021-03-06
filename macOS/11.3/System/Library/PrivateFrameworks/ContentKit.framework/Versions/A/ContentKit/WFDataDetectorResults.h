/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject {

	NSArray* _textCheckingResults;
	NSNumber* _number;
	NSArray* _dictionaries;
	WFFileType* _dictionaryType;

}

@property (nonatomic,readonly) NSArray * textCheckingResults;                //@synthesize textCheckingResults=_textCheckingResults - In the implementation block
@property (nonatomic,readonly) NSArray * URLs; 
@property (nonatomic,readonly) NSArray * streetAddresses; 
@property (nonatomic,readonly) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * dates; 
@property (nonatomic,readonly) NSArray * dateComponentsResults; 
@property (nonatomic,readonly) NSNumber * number;                            //@synthesize number=_number - In the implementation block
@property (nonatomic,readonly) NSArray * dictionaries;                       //@synthesize dictionaries=_dictionaries - In the implementation block
@property (nonatomic,readonly) WFFileType * dictionaryType;                  //@synthesize dictionaryType=_dictionaryType - In the implementation block
-(id)init;
-(NSArray *)URLs;
-(NSNumber *)number;
-(NSArray *)phoneNumbers;
-(NSArray *)dates;
-(NSArray *)dictionaries;
-(NSArray *)streetAddresses;
-(id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4 ;
-(NSArray *)dateComponentsResults;
-(NSArray *)textCheckingResults;
-(WFFileType *)dictionaryType;
@end

