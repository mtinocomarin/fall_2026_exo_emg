// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 81.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:49:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.919593, 0.919631,
    -0.549261, 0.549240,
    1.482055, -1.482012,
    0.400903, -0.400948,
    1.812252, -1.812246,
    -1.927650, 1.927734,
    -0.141785, 0.141696,
    0.286300, -0.286294,
    1.413432, -1.413236,
    -1.094501, 1.094039,
    -0.412565, 0.412691,
    0.764683, -0.764507,
};

float Cg_init[2] = {
    -1.009004, -1.008944
};

float xstd_init[12] = {
    0.003282, 0.001129, 0.095395, 0.161502, 0.001563, 0.000501, 0.027402, 0.079062, 0.000543, 0.000103, 0.018478, 0.064974
};

float xmean_init[12] = {
    0.009642, -0.006281, 0.170185, 0.568055, 0.003151, -0.007731, 0.006667, 0.046944, 0.003153, -0.007802, 0.004630, 0.067222
};

