/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface PICompositionSerializationResult : NSObject {

	NSData* _data;
	NSString* _formatIdentifier;
	NSString* _formatVersion;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * formatIdentifier;              //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                 //@synthesize formatVersion=_formatVersion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(NSString *)formatIdentifier;
-(void)setFormatIdentifier:(NSString *)arg1 ;
@end

