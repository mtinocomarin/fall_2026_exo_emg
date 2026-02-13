// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.94%
// test_accuracy: 69.58%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:40:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.681266, 0.681329,
    0.105155, -0.105230,
    0.352102, -0.352160,
    0.501069, -0.501051,
    -0.389906, 0.389924,
    0.206847, -0.206824,
    -0.061605, 0.061607,
    -0.015027, 0.014987,
    0.236721, -0.236472,
    -0.056654, 0.056184,
    -0.433911, 0.434038,
    0.008296, -0.008167,
};

float Cg_init[2] = {
    -0.193000, -0.193004
};

float xstd_init[12] = {
    0.004214, 0.001924, 0.149370, 0.203318, 0.000981, 0.000175, 0.025165, 0.078090, 0.000639, 0.000155, 0.028117, 0.103468
};

float xmean_init[12] = {
    0.010220, -0.005760, 0.240798, 0.681517, 0.003323, -0.007772, 0.008092, 0.072092, 0.003496, -0.007740, 0.012261, 0.115403
};

