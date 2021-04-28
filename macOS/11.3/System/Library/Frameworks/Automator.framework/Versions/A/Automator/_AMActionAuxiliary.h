/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSAttributedString, NSString, NSMutableData;

@interface _AMActionAuxiliary : NSObject {

	char _isDeprecated;
	NSMutableArray* _inputConnectionPoints;
	NSMutableArray* _outputConnectionPoints;
	id _outputOfPreviousAction;
	NSMutableArray* _bindings;
	NSMutableArray* _outputAsArrayOfResultsItems;
	NSAttributedString* _richTextOutput;
	NSString* _selectedInputType;
	NSString* _selectedOutputType;
	double _progressValue;
	NSMutableData* _amShellScriptActionResultData;

}

@property (nonatomic,retain) NSMutableArray * inputConnectionPoints;                     //@synthesize inputConnectionPoints=_inputConnectionPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputConnectionPoints;                    //@synthesize outputConnectionPoints=_outputConnectionPoints - In the implementation block
@property (nonatomic,retain) id outputOfPreviousAction;                                  //@synthesize outputOfPreviousAction=_outputOfPreviousAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * bindings;                                  //@synthesize bindings=_bindings - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputAsArrayOfResultsItems;               //@synthesize outputAsArrayOfResultsItems=_outputAsArrayOfResultsItems - In the implementation block
@property (assign,nonatomic) char isDeprecated;                                          //@synthesize isDeprecated=_isDeprecated - In the implementation block
@property (nonatomic,copy) NSAttributedString * richTextOutput;                          //@synthesize richTextOutput=_richTextOutput - In the implementation block
@property (nonatomic,copy) NSString * selectedInputType;                                 //@synthesize selectedInputType=_selectedInputType - In the implementation block
@property (nonatomic,copy) NSString * selectedOutputType;                                //@synthesize selectedOutputType=_selectedOutputType - In the implementation block
@property (assign,nonatomic) double progressValue;                                       //@synthesize progressValue=_progressValue - In the implementation block
@property (nonatomic,retain) NSMutableData * amShellScriptActionResultData;              //@synthesize amShellScriptActionResultData=_amShellScriptActionResultData - In the implementation block
-(id)init;
-(char)isDeprecated;
-(double)progressValue;
-(void)setProgressValue:(double)arg1 ;
-(void)setIsDeprecated:(char)arg1 ;
-(NSMutableArray *)inputConnectionPoints;
-(void)setInputConnectionPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputConnectionPoints;
-(void)setOutputConnectionPoints:(NSMutableArray *)arg1 ;
-(id)outputOfPreviousAction;
-(void)setOutputOfPreviousAction:(id)arg1 ;
-(NSMutableArray *)bindings;
-(void)setBindings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputAsArrayOfResultsItems;
-(void)setOutputAsArrayOfResultsItems:(NSMutableArray *)arg1 ;
-(NSAttributedString *)richTextOutput;
-(void)setRichTextOutput:(NSAttributedString *)arg1 ;
-(NSString *)selectedInputType;
-(void)setSelectedInputType:(NSString *)arg1 ;
-(NSString *)selectedOutputType;
-(void)setSelectedOutputType:(NSString *)arg1 ;
-(NSMutableData *)amShellScriptActionResultData;
-(void)setAmShellScriptActionResultData:(NSMutableData *)arg1 ;
@end
