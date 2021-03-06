/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDString;

@interface EDComment : NSObject {

	char _visible;
	int _rowIndex;
	int _columnIndex;
	EDString* _author;

}

@property (assign,nonatomic) int rowIndex;                   //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) int columnIndex;                //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,retain) EDString * author;              //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) char visible;                   //@synthesize visible=_visible - In the implementation block
-(id)description;
-(void)setColumnIndex:(int)arg1 ;
-(int)columnIndex;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(int)rowIndex;
-(void)setRowIndex:(int)arg1 ;
-(EDString *)author;
-(void)setAuthor:(EDString *)arg1 ;
@end

