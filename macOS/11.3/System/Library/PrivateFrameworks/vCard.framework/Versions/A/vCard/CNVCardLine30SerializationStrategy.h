/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {

	unsigned long long _startingLineLength;

}
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;
-(void)serializeGroupingName:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)_addAutomagicParametersForData:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg1 ;
@end

