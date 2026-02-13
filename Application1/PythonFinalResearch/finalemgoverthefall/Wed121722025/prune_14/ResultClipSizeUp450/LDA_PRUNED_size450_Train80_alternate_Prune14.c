// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.42%
// test_accuracy: 56.25%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_14.txt', 'act1\\trial_28.txt', 'act1\\trial_2.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 13:48:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.968685, 0.968711,
    0.266445, -0.266486,
    0.149174, -0.149176,
    -0.021585, 0.021602,
    -0.842584, 0.842547,
    -0.007114, 0.007133,
    0.411189, -0.411163,
    -0.057323, 0.057336,
    -0.886973, 0.887048,
    0.330977, -0.331117,
    -0.080967, 0.081008,
    0.295199, -0.295166,
};

float Cg_init[2] = {
    -0.465744, -0.465762
};

float xstd_init[12] = {
    0.001034, 0.000077, 0.011779, 0.080413, 0.003053, 0.000845, 0.086162, 0.173679, 0.000874, 0.000120, 0.018172, 0.073669
};

float xmean_init[12] = {
    0.006483, -0.007683, 0.004444, 0.145834, 0.008562, -0.006862, 0.098241, 0.441250, 0.004385, -0.007715, 0.009259, 0.129861
};

