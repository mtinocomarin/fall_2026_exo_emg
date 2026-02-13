// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.34%
// test_accuracy: 83.33%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:03:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.579087, 0.579112,
    -0.317589, 0.317582,
    0.481276, -0.481275,
    0.406183, -0.406198,
    1.120606, -1.120719,
    -1.461651, 1.461812,
    0.236477, -0.236528,
    0.042557, -0.042556,
    0.656007, -0.655935,
    -0.304137, 0.303986,
    -0.380818, 0.380857,
    0.483029, -0.482976,
};

float Cg_init[2] = {
    -0.452504, -0.452509
};

float xstd_init[12] = {
    0.003383, 0.001183, 0.094236, 0.157076, 0.001508, 0.000481, 0.024788, 0.074105, 0.000546, 0.000095, 0.016579, 0.064725
};

float xmean_init[12] = {
    0.009702, -0.006293, 0.164175, 0.570303, 0.003141, -0.007725, 0.005926, 0.046263, 0.003120, -0.007807, 0.004175, 0.065455
};

