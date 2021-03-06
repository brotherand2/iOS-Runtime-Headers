/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKShapeToCHRecognitionResult : NSObject {
    UIBezierPath * _doodlePath;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _doodlePathBoundsInInputView;
    BOOL  _doodlePathIsPrestroked;
    CHRecognitionResult * _result;
    int  _tag;
}

@property (retain) UIBezierPath *doodlePath;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } doodlePathBoundsInInputView;
@property BOOL doodlePathIsPrestroked;
@property (retain) CHRecognitionResult *result;
@property int tag;

- (void).cxx_destruct;
- (id)doodlePath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })doodlePathBoundsInInputView;
- (BOOL)doodlePathIsPrestroked;
- (id)initWith:(int)arg1 result:(id)arg2;
- (id)result;
- (void)setDoodlePath:(id)arg1;
- (void)setDoodlePathBoundsInInputView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDoodlePathIsPrestroked:(BOOL)arg1;
- (void)setResult:(id)arg1;
- (void)setTag:(int)arg1;
- (int)tag;

@end
