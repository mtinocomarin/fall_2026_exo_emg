// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.23%
// test_accuracy: 78.57%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 15:52:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.084455, 1.084502,
    -0.439375, 0.439380,
    1.171771, -1.171803,
    0.864677, -0.864690,
    1.893277, -1.893304,
    -2.669052, 2.669097,
    0.153032, -0.153056,
    0.037130, -0.037123,
    1.016132, -1.016050,
    -0.111934, 0.111750,
    -0.559114, 0.559161,
    0.397543, -0.397482,
};

float Cg_init[2] = {
    -1.028064, -1.028075
};

float xstd_init[12] = {
    0.003816, 0.001431, 0.103280, 0.176275, 0.001893, 0.000597, 0.035677, 0.097846, 0.000513, 0.000080, 0.015078, 0.058224
};

float xmean_init[12] = {
    0.009802, -0.006211, 0.169524, 0.580451, 0.003445, -0.007656, 0.010927, 0.062256, 0.003148, -0.007807, 0.004411, 0.067368
};

