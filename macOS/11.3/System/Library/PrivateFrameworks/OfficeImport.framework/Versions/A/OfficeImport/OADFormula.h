/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OADFormula : NSObject {

	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;

}
-(id)description;
-(id)name;
-(int)type;
-(void)setName:(id)arg1 ;
-(OADFormulaArg)argAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 arg0:(OADFormulaArg)arg2 arg1:(OADFormulaArg)arg3 arg2:(OADFormulaArg)arg4 ;
@end

