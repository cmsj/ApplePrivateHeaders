/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ICNFIMAPClientFetchDataItem : NSObject {

	NSString* _commandString;

}

@property (nonatomic,copy) NSString * commandString;              //@synthesize commandString=_commandString - In the implementation block
+(id)bodyStructureDataItem;
+(id)sizeDataItem;
+(id)flagsDataItem;
+(id)UIDDataItem;
+(id)internalDateDataItem;
+(id)modificationSequenceDataItem;
+(id)gmailLabelsDataItem;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)commandString;
-(void)setCommandString:(NSString *)arg1 ;
@end

