/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MSVSystemDialogResponse : NSObject {

	long long _buttonIdentifier;
	NSArray* _textFieldValues;

}

@property (nonatomic,readonly) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * textFieldValues;               //@synthesize textFieldValues=_textFieldValues - In the implementation block
-(id)description;
-(id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2 ;
-(long long)buttonIdentifier;
-(NSArray *)textFieldValues;
@end

